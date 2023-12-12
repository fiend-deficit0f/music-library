// playlist.c

#include <stdio.h>
#include <string.h>
#include "playlist.h"

struct Playlist createPlaylist(int playlistId, const char* name) {
    struct Playlist newPlaylist;
    newPlaylist.playlistId = playlistId;
    strncpy(newPlaylist.name, name, sizeof(newPlaylist.name));
    newPlaylist.songCount = 0;
    return newPlaylist;
}

void addSongToPlaylist(struct Playlist* playlist, struct Song song) {
    if (playlist->songCount < 50) {
        playlist->songs[playlist->songCount++] = song;
    } else {
        printf("Playlist is full. Cannot add more songs.\n");
    }
}

void displayPlaylistInfo(struct Playlist playlist) {
    printf("Playlist ID: %d\n", playlist.playlistId);
    printf("Name: %s\n", playlist.name);

    printf("Songs in the playlist:\n");
    for (int i = 0; i < playlist.songCount; i++) {
        displaySongInfo(playlist.songs[i]);
    }
}
