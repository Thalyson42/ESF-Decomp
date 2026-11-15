// Explodable__10CBreakable @0xc3c40 size=48
char Explodable__10CBreakable(int a0)
{
    unsigned int v0;  // 4114

    v0 = _ccall(15, 15, CBreakable::ExplosionMagnitude(a0), 0, 0);
    return (char)v0 & 1;
}

