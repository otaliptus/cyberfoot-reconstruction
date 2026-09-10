// Address: 00453444
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00453444(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  int local_10;
  
  if (((((param_2 == *(int *)(param_1 + 0x40)) && (param_3 == *(int *)(param_1 + 0x44))) &&
       (param_5 == *(int *)(param_1 + 0x48))) && (param_4 == *(int *)(param_1 + 0x4c))) ||
     (((*(int *)(param_1 + 0x180) != 0 || ((*(byte *)(param_1 + 0x1c) & 1) != 0)) ||
      (*(int *)(param_1 + 0x184) == 0)))) {
    FUN_004657c4(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    local_10 = FUN_00453dec(param_1);
    iVar3 = FUN_004550bc(*(undefined4 *)(param_1 + 0x184),local_10,param_2,param_3);
    bVar4 = iVar3 != local_10;
    if (bVar4) {
      bVar2 = false;
      iVar3 = FUN_00453dec(param_1);
      if (iVar3 < local_10) {
        local_10 = FUN_00453dec(param_1);
      }
    }
    else if (((byte)(*(char *)(param_1 + 0x17d) - 3U) < 2) && (param_5 != *(int *)(param_1 + 0x48)))
    {
      bVar2 = true;
      bVar4 = bVar2;
    }
    else {
      bVar2 = false;
      bVar4 = bVar2;
    }
    if ((*(char *)(param_1 + 0x17d) == '\x02') &&
       ((iVar3 = FUN_004498ac(), 0x40046 < iVar3 ||
        (*(char *)(*(int *)(param_1 + 0x184) + 0x229) == '\0')))) {
      param_5 = (param_5 + *(int *)(*(int *)(param_1 + 0x184) + 0x210)) - *(int *)(param_1 + 0x48);
    }
    if (((byte)(*(char *)(param_1 + 0x17d) - 3U) < 2) ||
       (param_5 == *(int *)(*(int *)(param_1 + 0x184) + 0x210))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    bVar5 = param_4 != *(int *)(*(int *)(param_1 + 0x184) + 0x214);
    if (bVar2) {
      FUN_004657c4(param_1,param_2,param_3,param_4,param_5);
    }
    if ((*(byte *)(param_1 + 0x1c) & 0x10) != 0) {
      if (bVar1) {
        FUN_00454418(*(undefined4 *)(param_1 + 0x184),param_5);
      }
      if (bVar5) {
        FUN_004543e8(*(undefined4 *)(param_1 + 0x184),param_4);
      }
    }
    if (((!bVar4) || (bVar1)) || (bVar5)) {
      FUN_00454164(*(undefined4 *)(param_1 + 0x184),local_10);
    }
    else {
      if (bVar2) {
        if ((byte)(*(char *)(param_1 + 0x17d) - 3U) < 2) {
          FUN_0045481c(*(undefined4 *)(param_1 + 0x184),local_10);
        }
        else {
          FUN_00454924(*(undefined4 *)(param_1 + 0x184),local_10);
        }
      }
      FUN_00454f24(*(undefined4 *)(param_1 + 0x184));
      FUN_00454298(*(undefined4 *)(param_1 + 0x184),0);
    }
  }
  return;
}

