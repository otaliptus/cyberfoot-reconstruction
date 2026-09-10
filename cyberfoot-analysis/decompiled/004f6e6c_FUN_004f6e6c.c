// Address: 004f6e6c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f6e6c(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 < param_2) {
    iVar2 = param_4;
    if (*(char *)(*(int *)(param_4 + -4) + 0x1040) == '\0') {
      iVar1 = FUN_004f6c6c(param_1,param_2,param_3,*(undefined4 *)(param_4 + -0x18),
                           *(undefined4 *)(param_4 + -0x14),*(undefined4 *)(param_4 + -0x10),
                           *(undefined4 *)(param_4 + -0xc));
    }
    else {
      iVar1 = FUN_004f6d6c(param_1,param_2,param_3,*(undefined4 *)(param_4 + -0x18),
                           *(undefined4 *)(param_4 + -0x14),*(undefined4 *)(param_4 + -0x10),
                           *(undefined4 *)(param_4 + -0xc));
    }
    iVar3 = param_4;
    FUN_004f6e6c(param_1,iVar1 + -1,iVar2);
    FUN_004f6e6c(iVar1,param_2,iVar3,param_4);
  }
  return;
}

