// artist.h

#ifndef ARTIST_H
#define ARTIST_H

struct Artist {
    int artistId;
    char name[50];
};

struct Artist createArtist(int artistId, const char* name);
void displayArtistInfo(struct Artist artist);

#endif
