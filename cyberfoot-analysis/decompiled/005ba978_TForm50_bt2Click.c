// Address: 005ba978
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm50_bt2Click(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined2 extraout_var;
  int iVar4;
  int iStack_110;
  undefined1 auStack_10c [256];
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x304) + 0x11c))();
  if (iVar1 < *(int *)PTR_DAT_0066b57c) {
    iStack_110 = -1;
    iVar1 = *(int *)PTR_DAT_0066b57c;
    iVar3 = iStack_110;
    if (0 < iVar1) {
      iVar4 = 1;
      piVar2 = (int *)(PTR_DAT_0066ac78 + 0x14);
      do {
        iVar3 = iVar4;
        if (*piVar2 == -1) break;
        iVar4 = iVar4 + 1;
        piVar2 = piVar2 + 1;
        iVar1 = iVar1 + -1;
        iVar3 = iStack_110;
      } while (iVar1 != 0);
    }
    iStack_110 = iVar3;
    if (iStack_110 != 0) {
      FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_005ba01c,PTR_DAT_0066b26c);
      (**(code **)(**(int **)PTR_DAT_0066b26c + 0xec))();
      FUN_00405eec(*(undefined4 *)PTR_DAT_0066b718);
      iVar3 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b718);
      iVar1 = 0;
      if (-1 < iVar3) {
        iVar3 = iVar3 + 1;
        iVar4 = 0;
        do {
          iVar1 = iVar4;
          if (*(char *)(*(int *)PTR_DAT_0066b718 + iVar4 * 0x80) == '\0') break;
          iVar4 = iVar4 + 1;
          iVar3 = iVar3 + -1;
          iVar1 = 0;
        } while (iVar3 != 0);
      }
      if ((iVar1 != -1) && (DAT_006d2b34 != 0)) {
        FUN_00404b80(auStack_10c,DAT_006d2b34,0xff);
        FUN_004030e0(*(int *)PTR_DAT_0066b718 + iVar1 * 0x80,auStack_10c,0x19);
        if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) {
          *(undefined4 *)(*(int *)PTR_DAT_0066b718 + 0x24 + iVar1 * 0x80) = 2;
        }
        else {
          *(undefined4 *)(*(int *)PTR_DAT_0066b718 + 0x24 + iVar1 * 0x80) = 4;
        }
        *(undefined4 *)(*(int *)PTR_DAT_0066b718 + 0x20 + iVar1 * 0x80) = 0xffffffff;
        *(undefined4 *)(*(int *)PTR_DAT_0066b718 + 0x28 + iVar1 * 0x80) = 0;
        *(undefined1 *)(*(int *)PTR_DAT_0066b718 + 0x30 + iVar1 * 0x80) = 1;
        *(undefined4 *)(*(int *)PTR_DAT_0066b718 + 0x1c + iVar1 * 0x80) = 0xffffffff;
        *(undefined4 *)(*(int *)PTR_DAT_0066b718 + 0x3c + iVar1 * 0x80) =
             *(undefined4 *)
              (*(int *)PTR_DAT_0066af70 + 0x3c + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8);
        *(undefined4 *)(*(int *)PTR_DAT_0066b718 + 0x7c + iVar1 * 0x80) = DAT_006d2b38;
        iVar3 = 0;
        do {
          *(undefined4 *)(*(int *)PTR_DAT_0066b718 + iVar1 * 0x80 + 0x44 + iVar3 * 4) = 0;
          iVar3 = iVar3 + 1;
        } while (iVar3 != 7);
        *(undefined4 *)(*(int *)PTR_DAT_0066b718 + 0x6c + iVar1 * 0x80) = 0;
        *(undefined4 *)(*(int *)PTR_DAT_0066b718 + 0x70 + iVar1 * 0x80) = 0;
        *(undefined4 *)(*(int *)PTR_DAT_0066b718 + 0x74 + iVar1 * 0x80) = 0;
        *(undefined4 *)(*(int *)PTR_DAT_0066b718 + 0x78 + iVar1 * 0x80) = 0;
        *(undefined1 *)(*(int *)PTR_DAT_0066b718 + 0x31 + iVar1 * 0x80) = 1;
        *(int *)(PTR_DAT_0066ac78 + iStack_110 * 4 + 0x10) = iVar1;
        FUN_005bac10(param_1);
        if (*(int *)(PTR_DAT_0066ac78 + 0x13c) < *(int *)PTR_DAT_0066b57c) {
          (**(code **)(**(int **)(param_1 + 800) + 100))(*(int **)(param_1 + 800),1);
        }
        else {
          (**(code **)(**(int **)(param_1 + 800) + 100))(*(int **)(param_1 + 800),0);
        }
      }
    }
  }
  else {
    FUN_00437ef0("Maximun 10",2,CONCAT22(extraout_var,DAT_005babf8),0);
  }
  return;
}

