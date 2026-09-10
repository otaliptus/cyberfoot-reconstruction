// Address: 0050f794
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0050f794(int *param_1,char param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined1 local_30 [12];
  int local_24;
  undefined1 local_20 [4];
  int local_1c;
  
  iVar6 = 0;
  iVar7 = 0;
  FUN_0050f004(param_1,local_30);
  FUN_0050f004(param_1,local_20);
  iVar4 = param_1[0x136];
  do {
    iVar3 = (**(code **)(*param_1 + 0x11c))();
    if (iVar3 <= iVar4) {
      if ((param_2 != '\0') && (uVar5 = param_1[0x136] - 1, -1 < (int)uVar5)) {
        do {
          cVar1 = (**(code **)(*param_1 + 300))(param_1,uVar5);
          if (cVar1 != '\0') {
            iVar4 = FUN_0050efe8(param_1,uVar5);
            iVar3 = FUN_0050f404(param_1,4);
            iVar7 = iVar7 + iVar4 + iVar3;
            if (local_24 - local_1c < iVar7) {
              return iVar6;
            }
            iVar6 = iVar6 + 1;
          }
          uVar5 = uVar5 - 1;
        } while (uVar5 < 0x80000000);
      }
      return iVar6;
    }
    cVar1 = (**(code **)(*param_1 + 300))(param_1,iVar4);
    if (cVar1 != '\0') {
      iVar3 = FUN_0050efe8(param_1,iVar4);
      iVar2 = FUN_0050f404(param_1,4);
      iVar7 = iVar7 + iVar3 + iVar2;
      if (local_24 - local_1c < iVar7) {
        return iVar6;
      }
      iVar6 = iVar6 + 1;
    }
    iVar4 = iVar4 + 1;
  } while( true );
}

