// Address: 005eb714
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_005eb714(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  POINT pt;
  BOOL BVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  RECT local_28;
  LONG local_18;
  LONG local_14;
  
  iVar4 = 1;
  piVar2 = (int *)PTR_DAT_0066b388;
  piVar3 = (int *)PTR_DAT_0066b3bc;
  do {
    FUN_0041c990(*piVar2,*piVar3,*piVar2 + 0x2a,&local_28,*piVar3 + 0x2a);
    FUN_0041c968(param_2,param_3,&local_18);
    pt.y = local_14;
    pt.x = local_18;
    BVar1 = PtInRect(&local_28,pt);
    if (BVar1 != 0) {
      return iVar4;
    }
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar4 != 0x1a);
  return 0;
}

