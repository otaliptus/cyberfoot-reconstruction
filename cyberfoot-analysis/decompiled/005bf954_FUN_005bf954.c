// Address: 005bf954
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005bf954(int *param_1)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  int *local_8;
  
  puStack_c = (undefined1 *)0x5bf963;
  local_8 = param_1;
  FUN_0046beec(param_1);
  if (((*(byte *)(local_8[0x82] + 0x2c) & 8) != 0) && (*(char *)((int)local_8 + 0x24b) == '\0')) {
    puStack_c = (undefined1 *)0x5bf986;
    cVar1 = FUN_0046cde4(local_8);
    if (cVar1 != '\0') {
      *(undefined1 *)((int)local_8 + 0x24b) = 1;
      puStack_10 = &LAB_005bf9d3;
      uStack_14 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_14;
      puStack_c = &stack0xfffffffc;
      cVar1 = (**(code **)(*local_8 + 0x50))();
      FUN_005bf030(local_8,0xfffffdfe,-(uint)(cVar1 != '\0'));
      *in_FS_OFFSET = uStack_14;
      *(undefined1 *)((int)local_8 + 0x24b) = 0;
      return;
    }
  }
  return;
}

