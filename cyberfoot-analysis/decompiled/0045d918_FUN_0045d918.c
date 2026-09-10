// Address: 0045d918
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0045d918(int *param_1,int *param_2)

{
  char cVar1;
  COLORREF CVar2;
  int iVar3;
  
  if ((((*(byte *)(param_1 + 7) & 0x10) == 0) &&
      (((*param_2 == 0x201 || (*param_2 == 0x203)) && (cVar1 = FUN_00466988(param_1), cVar1 == '\0')
       ))) && (*(char *)((int)param_1 + 0x5d) == '\x01')) {
    cVar1 = FUN_0046a380(param_1,param_2);
    if (cVar1 != '\0') {
      return;
    }
    *(ushort *)(param_1 + 0x15) = DAT_0045da24 | *(ushort *)(param_1 + 0x15);
    (**(code **)(*param_1 + -0x14))(param_1,param_2);
    return;
  }
  iVar3 = *param_2;
  if (iVar3 == 5) {
    if ((char)param_1[0x97] != '\0') {
      (**(code **)(*param_1 + -0x10))(param_1,param_2);
      return;
    }
  }
  else if (iVar3 == 0x102) {
    cVar1 = FUN_0046ba04(param_1,param_2);
    if (cVar1 != '\0') {
      return;
    }
    if ((((short)param_2[1] == 0xd) || ((short)param_2[1] == 0x1b)) &&
       (cVar1 = FUN_0045d32c(param_1), cVar1 != '\0')) {
      FUN_0045d350(param_1,0);
      return;
    }
  }
  else if (iVar3 - 0x132U < 7) {
    CVar2 = FUN_00429e64(*(undefined4 *)(param_1[0x1a] + 0x18));
    SetTextColor((HDC)param_2[1],CVar2);
    FUN_0042ab64(param_1[0x5c]);
    CVar2 = FUN_00429e64();
    SetBkColor((HDC)param_2[1],CVar2);
    iVar3 = FUN_0042aba0(param_1[0x5c]);
    param_2[3] = iVar3;
    return;
  }
  FUN_0046a414(param_1,param_2);
  return;
}

