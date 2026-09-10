// Address: 00405744
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00405744(int param_1,char *param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (param_3 != 0) {
    cVar1 = *param_2;
    uVar4 = (uint)(byte)param_2[1];
    if (cVar1 == '\n') {
      if (param_3 < 2) {
        FUN_004048d4();
      }
      else {
        FUN_004048f8(param_1,param_3);
      }
    }
    else if (cVar1 == '\v') {
      if (param_3 < 2) {
        FUN_00404ff0();
      }
      else {
        FUN_00405008(param_1,param_3);
      }
    }
    else {
      iVar3 = param_1;
      if (cVar1 == '\f') {
        do {
          FUN_0040572c(iVar3);
          iVar6 = param_3 + -1;
          bVar2 = 0 < param_3;
          iVar3 = iVar3 + 0x10;
          param_3 = iVar6;
        } while (iVar6 != 0 && bVar2);
      }
      else if (cVar1 == '\r') {
        do {
          iVar6 = *(int *)(param_2 + uVar4 + 2);
          FUN_00405744(iVar3,**(undefined4 **)(param_2 + uVar4 + 10),
                       *(undefined4 *)(param_2 + uVar4 + 6));
          iVar5 = param_3 + -1;
          bVar2 = 0 < param_3;
          iVar3 = iVar3 + iVar6;
          param_3 = iVar5;
        } while (iVar5 != 0 && bVar2);
      }
      else if (cVar1 == '\x0e') {
        do {
          iVar6 = *(int *)(param_2 + uVar4 + 2);
          FUN_004056f8(iVar3,param_2);
          iVar5 = param_3 + -1;
          bVar2 = 0 < param_3;
          iVar3 = iVar3 + iVar6;
          param_3 = iVar5;
        } while (iVar5 != 0 && bVar2);
      }
      else if (cVar1 == '\x0f') {
        do {
          FUN_00406880(iVar3);
          iVar6 = param_3 + -1;
          bVar2 = 0 < param_3;
          iVar3 = iVar3 + 4;
          param_3 = iVar6;
        } while (iVar6 != 0 && bVar2);
      }
      else {
        if (cVar1 != '\x11') {
          iVar3 = FUN_00402958(2);
          return iVar3;
        }
        do {
          FUN_004061c8(iVar3,param_2);
          iVar6 = param_3 + -1;
          bVar2 = 0 < param_3;
          iVar3 = iVar3 + 4;
          param_3 = iVar6;
        } while (iVar6 != 0 && bVar2);
      }
    }
  }
  return param_1;
}

