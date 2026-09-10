// Address: 004671cc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004671cc(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 local_10;
  undefined4 local_c;
  
  if (*(char *)((int)param_1 + 0x5b) == '\x05') {
    uVar2 = 1;
  }
  else {
    local_10 = *param_2;
    local_c = *param_3;
    uVar2 = (**(code **)(*param_1 + 0x34))(param_1,&local_10,&local_c);
    bVar1 = *(byte *)((int)param_1 + 0x5b);
    if ((bVar1 == 0) || ((byte)(bVar1 - 3) < 2)) {
      *param_2 = local_10;
    }
    if (bVar1 < 3) {
      *param_3 = local_c;
    }
  }
  return uVar2;
}

