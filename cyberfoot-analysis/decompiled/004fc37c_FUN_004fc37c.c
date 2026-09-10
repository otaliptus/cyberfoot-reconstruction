// Address: 004fc37c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004fc37c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 extraout_var;
  
  FUN_0050aca8(param_1);
  iVar1 = FUN_00403c34(*(undefined4 *)(param_1 + 0x50),PTR_PTR_004ee580);
  FUN_004f2fbc(iVar1,*(undefined4 *)(param_1 + 0x10c));
  FUN_004f1ff0(iVar1,*(undefined1 *)(param_1 + 0xd0));
  FUN_004f2980(iVar1);
  *(undefined4 *)(iVar1 + 600) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)(iVar1 + 0x25c) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)(iVar1 + 0x260) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)(iVar1 + 0x264) = *(undefined4 *)(param_1 + 0xdc);
  FUN_004f2f2c(iVar1,*(undefined1 *)(param_1 + 0x108));
  FUN_004f299c(iVar1,*(undefined1 *)(param_1 + 0x100));
  *(int *)(iVar1 + 0x2a4) = param_1;
  uVar2 = FUN_00403c98(param_1,CONCAT22(extraout_var,0xffef));
  *(undefined4 *)(iVar1 + 0x2a0) = uVar2;
  return;
}

