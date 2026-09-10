// Address: 0043aac0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0043aac0(int *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  if ((char)param_1[0x17] != '\0') {
    iVar3 = FUN_0042dc7c(param_1[0x5a]);
    if (0 < iVar3) {
      iVar3 = FUN_0042dc94(param_1[0x5a]);
      if (0 < iVar3) {
        uVar4 = FUN_0042dc7c(param_1[0x5a]);
        uVar5 = FUN_0042dc94(param_1[0x5a]);
        (**(code **)(*param_1 + 0x84))(param_1,param_1[0x10],param_1[0x11],uVar5,uVar4);
      }
    }
  }
  piVar1 = *(int **)(param_1[0x5a] + 0xc);
  if (piVar1 == (int *)0x0) {
    param_1[0x14] = ~DAT_0043abe4 & param_1[0x14];
  }
  else {
    cVar2 = FUN_00403c10(piVar1,PTR_LAB_00429238);
    if (cVar2 == '\0') {
      cVar2 = FUN_00403c10(piVar1,PTR_LAB_004294bc);
      if (cVar2 == '\0') {
        (**(code **)(*piVar1 + 0x3c))(piVar1,*(undefined1 *)((int)param_1 + 0x17b));
      }
    }
    FUN_0043a760(param_1,&iStack_18);
    cVar2 = (**(code **)(*piVar1 + 0x28))();
    if ((((cVar2 == '\0') && (iStack_18 < 1)) && (iStack_14 < 1)) &&
       ((param_1[0x12] <= iStack_10 && (param_1[0x13] <= iStack_c)))) {
      param_1[0x14] = DAT_0043abe4 | param_1[0x14];
    }
    else {
      param_1[0x14] = ~DAT_0043abe4 & param_1[0x14];
    }
    cVar2 = FUN_0043a94c(param_1);
    if ((cVar2 != '\0') && ((char)param_1[0x5f] != '\0')) {
      (**(code **)(*param_1 + 0x88))();
    }
  }
  if ((char)param_1[0x5f] == '\0') {
    (**(code **)(*param_1 + 0x7c))();
  }
  return;
}

