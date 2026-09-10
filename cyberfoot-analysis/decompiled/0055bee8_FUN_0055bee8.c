// Address: 0055bee8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0055bee8(int param_1,short *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  FUN_0046b914(param_1,param_2,param_3);
  if (((*(char *)(param_1 + 0x2f8) != '\0') && (*(int *)(param_1 + 0x308) != 0)) &&
     ((*param_2 == 0x20 ||
      ((*param_2 == 0xd && (*(char *)(*(int *)(param_1 + 0x308) + 0xe8) != '\0')))))) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x308) + 0x34);
    if (-1 < iVar2) {
      iVar1 = FUN_0041edb0(*(undefined4 *)(*(int *)(param_1 + 0x308) + 0xbc));
      if (iVar2 <= iVar1 + -1) {
        iVar2 = FUN_0055cec0(*(undefined4 *)(*(int *)(param_1 + 0x308) + 0xbc),
                             *(undefined4 *)(*(int *)(param_1 + 0x308) + 0x34));
        if (*(char *)(iVar2 + 0x54) != '\0') {
          iVar2 = FUN_0055cec0(*(undefined4 *)(*(int *)(param_1 + 0x308) + 0xbc),
                               *(undefined4 *)(*(int *)(param_1 + 0x308) + 0x34));
          *(undefined1 *)(iVar2 + 0xc) = 0;
          (**(code **)(**(int **)(param_1 + 0x308) + 0x30))();
          iVar2 = *(int *)(param_1 + 0x308);
          iVar1 = FUN_0055cec0(*(undefined4 *)(iVar2 + 0xbc),*(undefined4 *)(iVar2 + 0x34));
          FUN_005598e4(iVar2,*(undefined4 *)(iVar1 + 0x34));
        }
      }
    }
  }
  return;
}

