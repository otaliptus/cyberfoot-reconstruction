// Address: 00640920
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00640920(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR_DAT_0066af70;
  puVar2 = PTR_DAT_0066ac78;
  *(undefined4 *)PTR_DAT_0066b31c = 4;
  iVar1 = *(int *)(puVar2 + 8);
  if (*(int *)(*(int *)puVar3 + 0x7c + iVar1 * 0x2f8) == 2) {
    if (*(int *)(*(int *)puVar3 + 0x1a8 + iVar1 * 0x2f8) < 7) {
      *(undefined4 *)PTR_DAT_0066b31c = 2;
    }
    else {
      *(undefined4 *)PTR_DAT_0066b31c = 3;
    }
  }
  if (*(int *)(*(int *)puVar3 + 0x7c + iVar1 * 0x2f8) == 3) {
    if (*(int *)(*(int *)puVar3 + 0x1a8 + iVar1 * 0x2f8) < 7) {
      *(undefined4 *)PTR_DAT_0066b31c = 3;
    }
    else {
      *(undefined4 *)PTR_DAT_0066b31c = 4;
    }
  }
  if (*(int *)(*(int *)puVar3 + 0x7c + iVar1 * 0x2f8) == 4) {
    if (*(int *)(*(int *)puVar3 + 0x1a8 + iVar1 * 0x2f8) < 3) {
      *(undefined4 *)PTR_DAT_0066b31c = 3;
    }
    else {
      *(undefined4 *)PTR_DAT_0066b31c = 4;
    }
  }
  *(undefined4 *)PTR_DAT_0066b31c = 2;
  if (*(int *)(puVar2 + 0xc0) < 2) {
    if (*(int *)(*(int *)puVar3 + 0x7c + iVar1 * 0x2f8) == 1) {
      if (*(int *)(*(int *)puVar3 + 0x1a8 + iVar1 * 0x2f8) < 7) {
        *(undefined4 *)PTR_DAT_0066b31c = 1;
      }
      else {
        *(undefined4 *)PTR_DAT_0066b31c = 2;
      }
    }
  }
  else if (*(int *)(*(int *)puVar3 + 0x7c + iVar1 * 0x2f8) == 1) {
    *(undefined4 *)PTR_DAT_0066b31c = 1;
  }
  else if (*(int *)(*(int *)puVar3 + 0x1a8 + iVar1 * 0x2f8) < 2) {
    *(undefined4 *)PTR_DAT_0066b31c = 1;
  }
  else {
    *(undefined4 *)PTR_DAT_0066b31c = 2;
  }
  *(undefined4 *)PTR_DAT_0066b2a8 = 7;
  FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_005d0d3c,PTR_DAT_0066b4cc);
  (**(code **)(**(int **)PTR_DAT_0066b4cc + 0xec))();
  return;
}

