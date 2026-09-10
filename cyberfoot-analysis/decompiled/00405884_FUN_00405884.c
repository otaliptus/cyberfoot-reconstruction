// Address: 00405884
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00405884(undefined4 *param_1,char *param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (param_3 != 0) {
    cVar1 = *param_2;
    uVar4 = (uint)(byte)param_2[1];
    if (cVar1 == '\n') {
      do {
        uVar2 = *param_1;
        param_1 = param_1 + 1;
        FUN_00404d94(uVar2);
        iVar6 = param_3 + -1;
        bVar3 = 0 < param_3;
        param_3 = iVar6;
      } while (iVar6 != 0 && bVar3);
    }
    else if (cVar1 == '\v') {
      do {
        FUN_00405608(param_1);
        iVar6 = param_3 + -1;
        bVar3 = 0 < param_3;
        param_1 = param_1 + 1;
        param_3 = iVar6;
      } while (iVar6 != 0 && bVar3);
    }
    else if (cVar1 == '\f') {
      do {
        FUN_0040586c(param_1);
        iVar6 = param_3 + -1;
        bVar3 = 0 < param_3;
        param_1 = param_1 + 4;
        param_3 = iVar6;
      } while (iVar6 != 0 && bVar3);
    }
    else if (cVar1 == '\r') {
      do {
        iVar6 = *(int *)(param_2 + uVar4 + 2);
        FUN_00405884(param_1,**(undefined4 **)(param_2 + uVar4 + 10),
                     *(undefined4 *)(param_2 + uVar4 + 6));
        iVar5 = param_3 + -1;
        bVar3 = 0 < param_3;
        param_1 = (undefined4 *)((int)param_1 + iVar6);
        param_3 = iVar5;
      } while (iVar5 != 0 && bVar3);
    }
    else if (cVar1 == '\x0e') {
      do {
        iVar6 = *(int *)(param_2 + uVar4 + 2);
        FUN_0040583c(param_1,param_2);
        iVar5 = param_3 + -1;
        bVar3 = 0 < param_3;
        param_1 = (undefined4 *)((int)param_1 + iVar6);
        param_3 = iVar5;
      } while (iVar5 != 0 && bVar3);
    }
    else if (cVar1 == '\x0f') {
      do {
        uVar2 = *param_1;
        param_1 = param_1 + 1;
        FUN_004068f4(uVar2);
        iVar6 = param_3 + -1;
        bVar3 = 0 < param_3;
        param_3 = iVar6;
      } while (iVar6 != 0 && bVar3);
    }
    else {
      if (cVar1 != '\x11') {
        FUN_00402958(2);
        return;
      }
      do {
        uVar2 = *param_1;
        param_1 = param_1 + 1;
        FUN_0040622c(uVar2);
        iVar6 = param_3 + -1;
        bVar3 = 0 < param_3;
        param_3 = iVar6;
      } while (iVar6 != 0 && bVar3);
    }
  }
  return;
}

