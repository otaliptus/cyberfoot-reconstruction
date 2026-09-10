// Address: 0051d308
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0051d308(int param_1,HGDIOBJ param_2)

{
  int *piVar1;
  bool bVar2;
  HGDIOBJ pvVar3;
  
  pvVar3 = *(HGDIOBJ *)(param_1 + 0x14);
  if (param_2 != pvVar3) {
    if (pvVar3 != (HGDIOBJ)0x0) {
      DeleteObject(pvVar3);
    }
    if ((*(int **)(param_1 + 8) == (int *)0x0) ||
       (pvVar3 = (HGDIOBJ)(**(code **)(**(int **)(param_1 + 8) + 0x24))(), param_2 == pvVar3)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    *(HGDIOBJ *)(param_1 + 0x14) = param_2;
    if (bVar2) {
      FUN_0051d460(param_1);
      piVar1 = *(int **)(param_1 + 4);
      *(undefined1 *)((int)piVar1 + 0x22) = 1;
      (**(code **)(*piVar1 + 0x10))(piVar1,param_1);
    }
    return;
  }
  return;
}

