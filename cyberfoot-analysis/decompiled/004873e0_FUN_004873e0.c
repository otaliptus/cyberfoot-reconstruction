// Address: 004873e0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004873e0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0xa4) == '\0') {
    if (*(HWND *)(param_1 + 0x30) != (HWND)0x0) {
      SendMessageA(*(HWND *)(param_1 + 0x30),0xb020,1,(LPARAM)&param_4);
    }
  }
  else {
    iVar3 = *(int *)(*(int *)(param_1 + 0xa8) + 8);
    if (-1 < iVar3 + -1) {
      iVar2 = 0;
      do {
        piVar1 = (int *)FUN_0041e01c(*(undefined4 *)(param_1 + 0xa8),iVar2);
        if ((*piVar1 == param_4) && (param_5 == piVar1[1])) {
          FUN_0040281c(piVar1,8);
          FUN_0041df0c(*(undefined4 *)(param_1 + 0xa8),iVar2);
          return;
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}

