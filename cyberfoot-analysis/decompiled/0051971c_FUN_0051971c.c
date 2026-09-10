// Address: 0051971c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0051971c(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = 7;
  do {
    if (*(int *)(*param_2 + 0x1c + iVar1 * 4) != 0) {
      FUN_0051971c(param_1,*param_2 + 0x1c + iVar1 * 4);
    }
    iVar1 = iVar1 + -1;
  } while (iVar1 != -1);
  FUN_00403a84(*param_2);
  *param_2 = 0;
  return;
}

