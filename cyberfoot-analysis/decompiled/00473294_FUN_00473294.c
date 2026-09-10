// Address: 00473294
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00473294(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 != param_1[0x20]) {
    iVar2 = *(int *)(param_1[0x14] + 8);
    if (-1 < iVar2 + -1) {
      iVar3 = 0;
      do {
        piVar1 = (int *)FUN_00403c34(*(undefined4 *)(*(int *)(param_1[0x14] + 4) + iVar3 * 4),
                                     PTR_PTR_00472568);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0x6c))(piVar1,param_2);
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    param_1[0x20] = param_2;
    (**(code **)(*param_1 + 0x30))();
  }
  return;
}

