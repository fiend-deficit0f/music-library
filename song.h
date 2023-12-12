// song.h

#ifndef SONG_H
#define SONG_H

struct Song {
    int songId;
    char title[50];
    char artist[50];
    int duration;  // in seconds
};

struct Song createSong(int songId, const char* title, const char* artist, int duration);
void displaySongInfo(struct Song song);

#endif
