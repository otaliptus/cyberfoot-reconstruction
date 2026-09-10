// Address: 00621d38
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00621d38(void)

{
  int iVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_0066ad60;
  iVar1 = *(int *)(PTR_DAT_0066ac78 + 0x62c);
  if (iVar1 == 5) {
    *(undefined4 *)(PTR_DAT_0066ad60 + 0x180) = *(undefined4 *)(PTR_DAT_0066ad60 + 0x18);
    *(undefined4 *)(puVar2 + 0x184) = *(undefined4 *)(puVar2 + 0x48);
    *(undefined4 *)(puVar2 + 0x1b0) = *(undefined4 *)(puVar2 + 0xd8);
    *(undefined4 *)(puVar2 + 0x1b4) = *(undefined4 *)(puVar2 + 0x108);
    *(undefined4 *)(puVar2 + 0x1e0) = *(undefined4 *)(puVar2 + 0x78);
    *(undefined4 *)(puVar2 + 0x1e4) = *(undefined4 *)(puVar2 + 0xa8);
    *(undefined4 *)(puVar2 + 0x210) = *(undefined4 *)(puVar2 + 0x138);
    *(undefined4 *)(puVar2 + 0x214) = *(undefined4 *)(puVar2 + 0x168);
  }
  if (iVar1 == 6) {
    *(undefined4 *)(puVar2 + 0x240) = *(undefined4 *)(puVar2 + 0x198);
    *(undefined4 *)(puVar2 + 0x244) = *(undefined4 *)(puVar2 + 0x1c8);
    *(undefined4 *)(puVar2 + 0x270) = *(undefined4 *)(puVar2 + 0x1f8);
    *(undefined4 *)(puVar2 + 0x274) = *(undefined4 *)(puVar2 + 0x228);
  }
  if (iVar1 == 7) {
    *(undefined4 *)(puVar2 + 0x2a0) = *(undefined4 *)(puVar2 + 600);
    *(undefined4 *)(puVar2 + 0x2a4) = *(undefined4 *)(puVar2 + 0x288);
    if (*(int *)(puVar2 + 0x240) == *(int *)(puVar2 + 600)) {
      *(undefined4 *)(puVar2 + 0x2d0) = *(undefined4 *)(puVar2 + 0x244);
    }
    else {
      *(int *)(puVar2 + 0x2d0) = *(int *)(puVar2 + 0x240);
    }
    if (*(int *)(puVar2 + 0x270) == *(int *)(puVar2 + 0x288)) {
      *(undefined4 *)(puVar2 + 0x2d4) = *(undefined4 *)(puVar2 + 0x274);
    }
    else {
      *(int *)(puVar2 + 0x2d4) = *(int *)(puVar2 + 0x270);
    }
  }
  return;
}

