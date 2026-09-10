// Address: 0046f93c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int * FUN_0046f93c(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  POINT pt;
  char cVar1;
  int iVar2;
  int *piVar3;
  BOOL BVar4;
  LONG LVar5;
  LONG LVar6;
  RECT local_1c;
  LONG local_c;
  LONG local_8;
  
  iVar2 = FUN_00469730(*(undefined4 *)(*(int *)(param_4 + -8) + 0x14));
  iVar2 = iVar2 + -1;
  if (-1 < iVar2) {
    do {
      piVar3 = (int *)FUN_004696f4(*(undefined4 *)(*(int *)(param_4 + -8) + 0x14),iVar2);
      if ((*(char *)((int)piVar3 + 0x57) != '\0') &&
         ((cVar1 = FUN_00403c10(piVar3,PTR_PTR_00461f94), cVar1 == '\0' ||
          (*(char *)((int)piVar3 + 0x1a6) != '\0')))) {
        FUN_0041c968(*param_1 - piVar3[0x10],param_1[1] - piVar3[0x11],&local_c);
        LVar5 = local_c;
        LVar6 = local_8;
        (**(code **)(*piVar3 + 0x44))(piVar3,&local_1c);
        pt.y = LVar6;
        pt.x = LVar5;
        BVar4 = PtInRect(&local_1c,pt);
        if (BVar4 != 0) {
          return piVar3;
        }
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  return (int *)0x0;
}

