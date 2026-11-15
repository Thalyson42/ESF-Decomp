// Precache__15CControlledBeam @0xa74b0 size=65
typedef struct st_4a74b0_0 {
    unsigned int field_0;
} st_4a74b0_0;

extern st_4a74b0_0 *g_6167c4;

int Precache__15CControlledBeam(void)
{
    g_6167c4("weapons/beamhead.wav");
    return g_6167c4("weapons/beamfire.wav");
}

