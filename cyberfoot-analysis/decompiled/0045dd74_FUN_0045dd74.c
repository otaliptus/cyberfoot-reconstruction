// Address: 0045dd74
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0045dd74(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  UINT uFlags;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = (undefined1 *)0x45dd87;
  iVar1 = (**(code **)(*param_1 + 0x104))();
  if (param_1[0x84] < iVar1) {
    iVar1 = param_1[0x84];
  }
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  *(undefined1 *)(param_1 + 0x97) = 1;
  puStack_14 = &LAB_0045de0a;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  uFlags = 0x9e;
  puStack_10 = &stack0xfffffffc;
  iVar2 = (**(code **)(*param_1 + 0xfc))();
  SetWindowPos((HWND)param_1[0x92],(HWND)0x0,0,0,param_1[0x12],iVar2 * iVar1 + param_1[0x13] + 2,
               uFlags);
  *in_FS_OFFSET = uStack_18;
  *(undefined1 *)(param_1 + 0x97) = 0;
  return;
}

