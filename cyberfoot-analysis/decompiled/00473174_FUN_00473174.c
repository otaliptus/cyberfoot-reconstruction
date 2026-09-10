// Address: 00473174
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00473174(int *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined1 in_ZF;
  
  FUN_00404cf0(param_2,param_1[0x1e]);
  if (!(bool)in_ZF) {
    iVar5 = *(int *)(param_1[0x14] + 8);
    if (-1 < iVar5 + -1) {
      iVar4 = 0;
      do {
        uVar2 = FUN_0041e01c(param_1[0x14],iVar4);
        cVar1 = FUN_00403c10(uVar2,PTR_PTR_00472568);
        if (cVar1 != '\0') {
          piVar3 = (int *)FUN_0041e01c(param_1[0x14],iVar4);
          (**(code **)(*piVar3 + 0x60))(piVar3,param_2);
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    FUN_00404928(param_1 + 0x1e,param_2);
    (**(code **)(*param_1 + 0x30))();
  }
  return;
}

