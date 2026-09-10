// Address: 00470974
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00470974(int param_1)

{
  int iVar1;
  undefined4 extraout_ECX;
  int iVar2;
  
  FUN_00471474(DAT_0066cb54,0);
  FUN_00470a28(param_1);
  ReleaseDC(*(HWND *)(param_1 + 0x5c),*(HDC *)(param_1 + 0x58));
  iVar1 = *(int *)(param_1 + 0x60);
  if (*(char *)(*(int *)(iVar1 + 0x14) + 0x10) == '\x01') {
    iVar2 = (int)*(uint *)(param_1 + 0xc) >> 1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + (uint)((*(uint *)(param_1 + 0xc) & 1) != 0);
    }
    FUN_0046eeb8(iVar1,iVar2 + *(int *)(param_1 + 0x54));
  }
  else {
    iVar2 = (int)*(uint *)(param_1 + 0xc) >> 1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + (uint)((*(uint *)(param_1 + 0xc) & 1) != 0);
    }
    FUN_0046eeb8(iVar1,iVar2 + *(int *)(param_1 + 0x50));
  }
  FUN_004708a0(param_1,*(undefined4 *)(*(int *)(param_1 + 0x60) + 0x14));
  FUN_0046f244(param_1,*(undefined4 *)(*(int *)(param_1 + 0x60) + 0x14),extraout_ECX,&LAB_00470a18,
               param_1);
  *(undefined4 *)(param_1 + 0x60) = 0;
  return;
}

