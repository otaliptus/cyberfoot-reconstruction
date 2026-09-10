// Address: 0040595c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040595c(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  
  puVar8 = (undefined4 *)(*(byte *)(param_3 + 1) + 10 + param_3);
  iVar7 = puVar8[-1];
  iVar5 = 0;
  iVar2 = puVar8[-2];
  do {
    if (iVar5 < (int)puVar8[1]) {
      FUN_00402a04(iVar5 + param_2,iVar5 + param_1);
    }
    iVar3 = puVar8[1];
    pcVar4 = *(char **)*puVar8;
    cVar1 = *pcVar4;
    if (cVar1 == '\n') {
      FUN_00404928(iVar3 + param_1,*(undefined4 *)(iVar3 + param_2));
      iVar5 = 4;
    }
    else if (cVar1 == '\v') {
      FUN_0040502c(iVar3 + param_1,*(undefined4 *)(iVar3 + param_2));
      iVar5 = 4;
    }
    else if (cVar1 == '\f') {
      FUN_00405944(iVar3 + param_1,iVar3 + param_2);
      iVar5 = 0x10;
    }
    else if (cVar1 == '\r') {
      uVar6 = (uint)(byte)pcVar4[1];
      iVar5 = *(int *)(pcVar4 + uVar6 + 2);
      FUN_00405a78(iVar3 + param_1,iVar3 + param_2,**(undefined4 **)(pcVar4 + uVar6 + 10),
                   *(undefined4 *)(pcVar4 + uVar6 + 6));
    }
    else if (cVar1 == '\x0e') {
      iVar5 = *(int *)(pcVar4 + (byte)pcVar4[1] + 2);
      FUN_0040595c(iVar3 + param_1,iVar3 + param_2,pcVar4);
    }
    else if (cVar1 == '\x0f') {
      FUN_00406898(iVar3 + param_1,*(undefined4 *)(iVar3 + param_2));
      iVar5 = 4;
    }
    else {
      if (cVar1 != '\x11') {
        FUN_00402958(CONCAT31((int3)((uint)iVar3 >> 8),2));
        return;
      }
      FUN_00406204(iVar3 + param_1,*(undefined4 *)(iVar3 + param_2),pcVar4);
      iVar5 = 4;
    }
    iVar5 = iVar5 + puVar8[1];
    puVar8 = puVar8 + 2;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  if (iVar5 < iVar2) {
    FUN_00402a04(iVar5 + param_2,iVar5 + param_1);
  }
  return;
}

