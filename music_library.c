// music_library.c

#include <stdio.h>
#include "song.h"
#include "artist.h"
#include "playlist.h"

int main() {
    // Create songs
    struct Song song1 = createSong(1, "Song A", "Artist 1", 180);
    struct Song song2 = createSong(2, "Song B", "Artist 2", 240);

    // Create artists
    struct Artist artist1 = createArtist(101, "Artist 1");
    struct Artist artist2 = createArtist(102, "Artist 2");

    // Create playlists
    struct Playlist playlist1 = createPlaylist(1001, "My Playlist 1");
    struct Playlist playlist2 = createPlaylist(1002, "My Playlist 2");

    // Add songs to playlists
    addSongToPlaylist(&playlist1, song1);
    addSongToPlaylist(&playlist1, song2);
    addSongToPlaylist(&playlist2, song2);

    // Display information
    printf("Song Information:\n");
    displaySongInfo(song1);
    printf("\n");
    displaySongInfo(song2);

    printf("\nArtist Information:\n");
    displayArtistInfo(artist1);
    printf("\n");
    displayArtistInfo(artist2);

    printf("\nPlaylist Information:\n");
    displayPlaylistInfo(playlist1);
    printf("\n");
    displayPlaylistInfo(playlist2);

    return 0;
}
