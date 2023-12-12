// artist.c

#include <stdio.h>
#include <string.h>
#include "artist.h"

struct Artist createArtist(int artistId, const char* name) {
    struct Artist newArtist;
    newArtist.artistId = artistId;
    strncpy(newArtist.name, name, sizeof(newArtist.name));
    return newArtist;
}

void displayArtistInfo(struct Artist artist) {
    printf("Artist ID: %d\n", artist.artistId);
    printf("Name: %s\n", artist.name);
}
