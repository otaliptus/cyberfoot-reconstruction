// Address: 0048af30
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0048af30(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined **ppuVar2;
  undefined4 *puVar3;
  undefined4 *in_FS_OFFSET;
  byte bVar4;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  bVar4 = 0;
  puStack_18 = (undefined1 *)0x48af4b;
  FUN_004032a8(param_2,0x288,0);
  ppuVar2 = &PTR_FUN_00665324;
  puVar3 = param_2;
  for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *ppuVar2;
    ppuVar2 = ppuVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  param_2[0x2e] = param_2;
  puStack_18 = (undefined1 *)0x48af7f;
  FUN_0048bfc0(param_2 + 0x2e,0x3e,0x1d0);
  puStack_1c = &LAB_0048b11f;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  param_2[0x21] = &LAB_0048ae18;
  param_2[0x26] = param_1;
  param_2[0x30] = param_2 + 0x21;
  puStack_18 = &stack0xfffffffc;
  FUN_004208f4(*(undefined4 *)(*(int *)(param_1 + 0x28) + 8));
  FUN_0048d72c(param_2 + 0x2e,*(undefined4 *)(*(int *)(param_1 + 0x28) + 8));
  FUN_0048c288(param_2 + 0x2e,0xffffffff);
  param_2[0x3a] = 1;
  param_2[0x3b] = 1 << (*(byte *)(param_1 + 0x43) & 0x1f);
  param_2[0x42] = -(uint)(*(char *)(param_1 + 0x3c) != '\0');
  if (*(char *)(param_1 + 0x3d) != '\0') {
    param_2[0x39] = 1;
  }
  if ((*(char *)(param_1 + 0x3e) == '\x01') || (param_2[0x39] == 1)) {
    param_2[0x43] = 0xffffffff;
    param_2[0x46] = 0xec;
  }
  if (*(char *)(param_1 + 0x42) == '\x01') {
    param_2[0x40] = 1;
    param_2[0x45] = 0;
    param_2[0x44] = 1;
  }
  param_2[0x2b] = param_2[0x40];
  *(char *)(param_2 + 0x2c) = '\x01' - (param_2[0x45] == 0);
  param_2[0x2d] = param_2[0x44];
  if (*(char *)(param_1 + 0x40) != '\0') {
    iVar1 = FUN_0048c3d4(param_2 + 0x2e);
    if (iVar1 != 0) {
      param_2[0x49] = param_2[0x45];
      param_2[0x40] = 1;
      param_2[0x45] = 0;
      param_2[0x44] = 1;
      param_2[0x3e] = 0xffffffff;
    }
  }
  *in_FS_OFFSET = uStack_20;
  return;
}

