// Address: 0051c93c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0051c93c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_0051c91c(param_1);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x6c);
  iVar2 = 1;
  do {
    if (param_2 < 1) {
LAB_0051c9cb:
      FUN_0051c924(param_1);
      return;
    }
    if (iVar2 == 1) {
      *(undefined4 *)(param_1 + 0x70) = 1;
      FUN_0051c830(param_1,*(undefined4 *)(param_1 + 0x6c));
      iVar1 = -1;
    }
    else {
      if (param_2 < iVar2) {
        if (param_2 == 1) {
          *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
          FUN_0051c830(param_1,*(undefined4 *)(param_1 + 0x6c));
        }
        else {
          *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
          FUN_0051c830(param_1,*(short *)(param_1 + 0x4a) + param_2 + -2);
        }
        goto LAB_0051c9cb;
      }
      *(int *)(param_1 + 0x70) = iVar2;
      FUN_0051c830(param_1,*(short *)(param_1 + 0x4a) + iVar2 + -2);
      iVar1 = -iVar2;
    }
    param_2 = param_2 + iVar1;
    if (*(int *)(param_1 + 0x78) == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = iVar2 + 1;
    }
  } while( true );
}

