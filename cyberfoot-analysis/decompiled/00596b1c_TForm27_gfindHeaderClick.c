// Address: 00596b1c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm27_gfindHeaderClick(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  FUN_0050e4dc(*(undefined4 *)(param_1 + 0x344),"nxpasse");
  iVar3 = FUN_0050a2cc();
  if (param_3 == iVar3) {
    uVar4 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x344),"nxvalortmp");
    FUN_0050a760(uVar4,1);
    iVar3 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x344),"nxvalortmp");
    if (*(char *)(iVar3 + 0x9a) == '\0') {
      uVar4 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x344),"nxvalortmp");
      FUN_0050a7dc(uVar4,1);
    }
    else {
      uVar4 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x344),"nxvalortmp");
      FUN_0050a7dc(uVar4,0);
    }
    iVar3 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x344),"nxvalortmp");
    cVar1 = *(char *)(iVar3 + 0x9a);
    piVar2 = *(int **)(param_1 + 0x344);
    uVar4 = FUN_0050e4dc(piVar2,"nxvalortmp");
    (**(code **)(*piVar2 + 0x1b4))(piVar2,uVar4,cVar1 == '\0');
  }
  return;
}

