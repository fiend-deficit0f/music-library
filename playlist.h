// playlist.h

#ifndef PLAYLIST_H
#define PLAYLIST_H

#include "song.h"

struct Playlist {
    int playlistId;
    char name[50];
    struct Song songs[50];
    int songCount;
};

struct Playlist createPlaylist(int playlistId, const char* name);
void addSongToPlaylist(struct Playlist* playlist, struct Song song);
void displayPlaylistInfo(struct Playlist playlist);

#endif
