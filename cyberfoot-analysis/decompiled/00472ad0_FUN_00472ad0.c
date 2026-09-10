// Address: 00472ad0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00472ad0(int param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar3 = FUN_0047e3c8(*(undefined4 *)(param_2 + 8));
  uVar3 = FUN_004761a8(*(undefined2 *)(param_2 + 4),uVar3);
  if (((short)uVar3 != 0) && (iVar6 = *(int *)(*(int *)(param_1 + 0x30) + 8), -1 < iVar6 + -1)) {
    iVar7 = 0;
    do {
      piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x30) + 4) + iVar7 * 4);
      cVar2 = FUN_00403c10(piVar1,PTR_PTR_00472158);
      if (cVar2 != '\0') {
        if ((short)uVar3 == (short)piVar1[0x21]) {
LAB_00472b47:
          uVar3 = (**(code **)(*piVar1 + 0x50))();
          return uVar3;
        }
        if (piVar1[0x24] != 0) {
          uVar4 = FUN_00473488(piVar1);
          iVar5 = FUN_0047357c(uVar4,uVar3);
          if (iVar5 != -1) goto LAB_00472b47;
        }
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return 0;
}

