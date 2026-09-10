// Address: 0050a760
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0050a760(int *param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  uVar1 = (**(code **)(*param_1 + 0x40))();
  if ((uVar1 & 4) == 0) {
    if (param_2 == '\0') {
      *(undefined1 *)((int)param_1 + 0x99) = 0;
      FUN_0050abec(param_1,8,0xffffffff);
    }
    else {
      iVar2 = FUN_0050ae9c(param_1[0xe]);
      if (-1 < iVar2 + -1) {
        iVar5 = 0;
        do {
          iVar3 = (**(code **)(*(int *)param_1[0xe] + 0x30))((int *)param_1[0xe],iVar5);
          if (*(char *)(iVar3 + 0x99) != '\0') {
            uVar4 = (**(code **)(*(int *)param_1[0xe] + 0x30))((int *)param_1[0xe],iVar5);
            FUN_0050a760(uVar4,0);
          }
          iVar5 = iVar5 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      *(char *)((int)param_1 + 0x99) = param_2;
      FUN_0050abec(param_1,4,0xffffffff);
    }
  }
  return;
}

