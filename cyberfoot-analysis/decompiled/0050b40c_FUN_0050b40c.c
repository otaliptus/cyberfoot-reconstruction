// Address: 0050b40c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0050b40c(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0041e078(*(undefined4 *)(param_1 + 0x38),param_2);
  if (iVar1 != -1) {
    FUN_0041df0c(*(undefined4 *)(param_1 + 0x38),iVar1);
    FUN_00403c80(param_1,1,2,0xffffffff,iVar1);
  }
  iVar2 = FUN_0041e078(*(undefined4 *)(param_1 + 0x3c),param_2);
  if (iVar2 != -1) {
    FUN_0041df0c(*(undefined4 *)(param_1 + 0x3c),iVar2);
  }
  if ((*(byte *)(*(int *)(param_1 + 4) + 0x1c) & 8) == 0) {
    FUN_0050b1b0(param_1,1);
    FUN_0050b490(param_1,0,0);
    FUN_00403c80(param_1,1,2,0xffffffff,iVar1);
  }
  return;
}

