// Address: 005d6b3c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm30_bt3Click(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  cVar2 = (**(code **)(**(int **)(param_1 + 0x308) + 200))();
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(**(int **)(param_1 + 0x310) + 200))();
    if (cVar2 == '\0') {
      cVar2 = (**(code **)(**(int **)(param_1 + 0x318) + 200))();
      if (cVar2 == '\0') {
        cVar2 = (**(code **)(**(int **)(param_1 + 800) + 200))();
        if (cVar2 != '\0') {
          iVar6 = 4;
        }
      }
      else {
        iVar6 = 3;
      }
    }
    else {
      iVar6 = 2;
    }
  }
  else {
    iVar6 = 1;
  }
  if ((iVar6 != 0) && (*(int *)(PTR_DAT_0066adf4 + iVar6 * 4 + -4) != -1)) {
    iVar3 = *(int *)(*(int *)PTR_DAT_0066b718 + 0x1c + *(int *)(PTR_DAT_0066ac78 + 0x10) * 0x80);
    if (iVar3 == -1) {
      FUN_00649824(*(int *)(PTR_DAT_0066adf4 + iVar6 * 4 + -4),
                   *(undefined4 *)
                    (*(int *)PTR_DAT_0066af70 + 0x44 +
                    *(int *)(PTR_DAT_0066adf4 + iVar6 * 4 + -4) * 0x2f8),PTR_DAT_0066adf4);
      FUN_00649138(*(undefined4 *)(PTR_DAT_0066adf4 + iVar6 * 4 + -4),
                   *(undefined4 *)(PTR_DAT_0066ac78 + 0x10));
    }
    else {
      uVar1 = *(undefined4 *)
               (*(int *)PTR_DAT_0066af70 + 0x44 +
               *(int *)(PTR_DAT_0066adf4 + iVar6 * 4 + -4) * 0x2f8);
      FUN_00649824(*(int *)(PTR_DAT_0066adf4 + iVar6 * 4 + -4),
                   *(undefined4 *)
                    (*(int *)PTR_DAT_0066af70 + 0x44 +
                    *(int *)(PTR_DAT_0066adf4 + iVar6 * 4 + -4) * 0x2f8),PTR_DAT_0066adf4);
      FUN_00649824(*(undefined4 *)
                    (*(int *)PTR_DAT_0066b718 + 0x1c + *(int *)(PTR_DAT_0066ac78 + 0x10) * 0x80),
                   *(int *)(PTR_DAT_0066ac78 + 0x10),PTR_DAT_0066ac78);
      FUN_00649138(iVar3,uVar1);
      FUN_00649138(*(undefined4 *)(PTR_DAT_0066adf4 + iVar6 * 4 + -4),
                   *(undefined4 *)(PTR_DAT_0066ac78 + 0x10));
    }
    iVar3 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b5b8);
    iVar3 = iVar3 + -1;
    if (0 < iVar3) {
      iVar5 = 1;
      do {
        iVar4 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + iVar5 * 0x130);
        if ((-1 < iVar4) && (iVar4 == *(int *)(PTR_DAT_0066adf4 + iVar6 * 4 + -4))) {
          *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0xe4 + iVar5 * 0x130) = 3;
          *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0xe8 + iVar5 * 0x130) = 1;
          iVar4 = FUN_004032c8(0x1e);
          FUN_00647c48(iVar4 + 10,iVar5);
        }
        iVar5 = iVar5 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_0064cbf0(*(undefined4 *)(PTR_DAT_0066adf4 + iVar6 * 4 + -4),0,1,0,0,0);
    FUN_00483bc4(DAT_006d33e8);
  }
  return;
}

