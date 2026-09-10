// Address: 0046a234
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046a234(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  POINT pt;
  bool bVar1;
  char cVar2;
  BOOL BVar3;
  undefined4 uVar4;
  int iVar5;
  LONG LVar6;
  LONG LVar7;
  RECT local_1c;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_0041c968(**(int **)(param_4 + -4) - param_1[0x10],
               *(int *)(*(int *)(param_4 + -4) + 4) - param_1[0x11],&local_c);
  *(undefined4 *)(param_4 + -0xc) = local_c;
  *(undefined4 *)(param_4 + -8) = local_8;
  LVar7 = *(LONG *)(param_4 + -8);
  LVar6 = *(LONG *)(param_4 + -0xc);
  (**(code **)(*param_1 + 0x44))(param_1,&local_1c);
  pt.y = LVar7;
  pt.x = LVar6;
  BVar3 = PtInRect(&local_1c,pt);
  if (BVar3 != 0) {
    if (((*(byte *)(param_1 + 7) & 0x10) != 0) &&
       ((*(char *)((int)param_1 + 0x57) != '\0' || ((*(byte *)((int)param_1 + 0x51) & 4) == 0)))) {
LAB_0046a2d9:
      bVar1 = true;
      goto LAB_0046a2db;
    }
    if (*(char *)((int)param_1 + 0x57) != '\0') {
      cVar2 = (**(code **)(*param_1 + 0x50))();
      if ((cVar2 != '\0') || (*(char *)(param_4 + -0xd) != '\0')) {
        uVar4 = FUN_004080e0(param_4 + -0xc);
        iVar5 = FUN_004673cc(param_1,0xb00a,0,uVar4);
        if (iVar5 != 0) goto LAB_0046a2d9;
      }
    }
  }
  bVar1 = false;
LAB_0046a2db:
  if (bVar1) {
    *(int **)(param_4 + -0x14) = param_1;
  }
  return;
}

