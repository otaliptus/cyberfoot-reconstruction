// Address: 005f99c4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005f99c4(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(PTR_DAT_0066ac78 + 0x88);
  if ((iVar5 < 7) || (9 < iVar5)) {
    if (iVar5 == 1) {
      *(undefined4 *)PTR_DAT_0066b2e0 = 0;
      cVar1 = FUN_005f996c(param_1);
      if (cVar1 != '\0') {
        uVar2 = FUN_004032c8(3);
        *(undefined4 *)PTR_DAT_0066b2e0 = uVar2;
      }
      if (*(int *)PTR_DAT_0066b2e0 < 1) {
        FUN_005f4074(param_1);
        FUN_00483bc4(DAT_006d3f38);
        FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_00634a00,PTR_DAT_0066b054);
        FUN_00483d6c(*(undefined4 *)PTR_DAT_0066b054);
      }
      else {
        *(undefined4 *)PTR_DAT_0066ad44 = 0xffffffff;
        FUN_005f4074(param_1);
        FUN_00483bc4(DAT_006d3f38);
        FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_005a2804,PTR_DAT_0066b0b0);
        FUN_00483d6c(*(undefined4 *)PTR_DAT_0066b0b0);
      }
    }
    else {
      FUN_005f4074(param_1);
      FUN_00483bc4(DAT_006d3f38);
      FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_00634a00,PTR_DAT_0066b054);
      FUN_00483d6c(*(undefined4 *)PTR_DAT_0066b054);
    }
  }
  else {
    cVar1 = FUN_005f98f4(param_1,PTR_DAT_0066ac78);
    if (cVar1 == '\0') {
      FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_005ce258,PTR_DAT_0066b5d0);
      FUN_005f4074(param_1);
      FUN_00483bc4(DAT_006d3f38);
      FUN_00483d6c(*(undefined4 *)PTR_DAT_0066b5d0);
    }
    else {
      iVar5 = *(int *)(PTR_DAT_0066ac78 + 0x5fc);
      if (0 < iVar5) {
        iVar4 = 1;
        piVar3 = (int *)(PTR_DAT_0066ac78 + 0x604);
        do {
          cVar1 = FUN_0064d890(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + *piVar3 * 0x2f8));
          if (cVar1 != '\0') {
            *(int *)PTR_DAT_0066b710 = iVar4;
            FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_005efd44,PTR_DAT_0066af34);
            (**(code **)(**(int **)PTR_DAT_0066af34 + 0xec))();
          }
          iVar4 = iVar4 + 1;
          piVar3 = piVar3 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_005ce258,PTR_DAT_0066b5d0);
      FUN_005f4074(param_1);
      FUN_00483bc4(DAT_006d3f38);
      FUN_00483d6c(*(undefined4 *)PTR_DAT_0066b5d0);
    }
  }
  return;
}

