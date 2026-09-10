// Address: 004435d4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

bool FUN_004435d4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  iVar1 = (**(code **)(*param_1 + 0x54))();
  if ((0 < iVar1) && (bVar2 = *(short *)((int)param_1 + 0xd2) != 0, bVar2)) {
    (*(code *)param_1[0x34])(param_1[0x35],param_1,param_2,param_4,param_5,param_3);
  }
  return bVar2;
}

