// Address: 00512eb4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00512eb4(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iStack_24;
  undefined1 auStack_20 [12];
  int iStack_14;
  
  iVar4 = 0;
  if (-1 < param_2) {
    iVar2 = (**(code **)(*param_1 + 0x11c))();
    if (param_2 < iVar2) {
      iVar2 = FUN_00512e2c(param_1);
      if (iVar2 < param_2) {
        iStack_24 = (**(code **)(*param_1 + 0x120))(param_1,param_2);
        iVar2 = FUN_0050f5f8(param_1,param_2);
        iStack_24 = iStack_24 + iVar2;
        iVar2 = param_1[0x136] - param_2;
        if (iVar2 == 0 || param_1[0x136] < param_2) {
          iVar2 = iVar2 + -1;
          do {
            cVar1 = (**(code **)(*param_1 + 300))(param_1,param_2);
            if (cVar1 != '\0') {
              iVar3 = (**(code **)(*param_1 + 0x120))(param_1,param_2);
              iStack_24 = iStack_24 - (iVar3 + param_1[0xae]);
              iVar4 = iVar4 + 1;
              FUN_0050f004(param_1,auStack_20);
              if (iStack_24 <= iStack_14) break;
            }
            param_2 = param_2 + -1;
            iVar2 = iVar2 + 1;
          } while (iVar2 != 0);
        }
        FUN_004e7c2c(param_1[0x9a],iVar4);
      }
      else if (param_2 < param_1[0x136]) {
        iVar4 = FUN_0050e574(param_1,param_2,param_1[0x136]);
        FUN_004e7b1c(param_1[0x9a],*(int *)(param_1[0x9a] + 0x2c) - iVar4);
      }
    }
  }
  return;
}

