// Address: 00621c90
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00621c90(void)

{
  int iVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_0066ad60;
  iVar1 = *(int *)(PTR_DAT_0066ac78 + 0x62c);
  if (iVar1 == 5) {
    *(undefined4 *)(PTR_DAT_0066ad60 + 0xc0) = *(undefined4 *)(PTR_DAT_0066ad60 + 0x18);
    *(undefined4 *)(puVar2 + 0xc4) = *(undefined4 *)(puVar2 + 0x48);
    *(undefined4 *)(puVar2 + 0xf0) = *(undefined4 *)(puVar2 + 0x78);
    *(undefined4 *)(puVar2 + 0xf4) = *(undefined4 *)(puVar2 + 0xa8);
  }
  if (iVar1 == 6) {
    *(undefined4 *)(puVar2 + 0x120) = *(undefined4 *)(puVar2 + 0xd8);
    *(undefined4 *)(puVar2 + 0x124) = *(undefined4 *)(puVar2 + 0x108);
    if (*(int *)(puVar2 + 0xc0) == *(int *)(puVar2 + 0xd8)) {
      *(undefined4 *)(puVar2 + 0x150) = *(undefined4 *)(puVar2 + 0xc4);
    }
    else {
      *(int *)(puVar2 + 0x150) = *(int *)(puVar2 + 0xc0);
    }
    if (*(int *)(puVar2 + 0xf0) == *(int *)(puVar2 + 0x108)) {
      *(undefined4 *)(puVar2 + 0x154) = *(undefined4 *)(puVar2 + 0xf4);
    }
    else {
      *(int *)(puVar2 + 0x154) = *(int *)(puVar2 + 0xf0);
    }
  }
  return;
}

