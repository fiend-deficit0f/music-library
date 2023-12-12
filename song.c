// song.c

#include <stdio.h>
#include <string.h>
#include "song.h"

struct Song createSong(int songId, const char* title, const char* artist, int duration) {
    struct Song newSong;
    newSong.songId = songId;
    strncpy(newSong.title, title, sizeof(newSong.title));
    strncpy(newSong.artist, artist, sizeof(newSong.artist));
    newSong.duration = duration;
    return newSong;
}

void displaySongInfo(struct Song song) {
    printf("Song ID: %d\n", song.songId);
    printf("Title: %s\n", song.title);
    printf("Artist: %s\n", song.artist);
    printf("Duration: %d seconds\n", song.duration);
}
