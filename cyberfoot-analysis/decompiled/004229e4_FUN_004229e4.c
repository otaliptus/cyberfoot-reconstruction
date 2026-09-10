// Address: 004229e4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004229e4(undefined4 param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint local_c;
  
  local_c = param_3;
  uVar1 = FUN_004239d4(param_1);
  switch(uVar1 & 0x7f) {
  case 0:
    FUN_00404928(param_2,&DAT_00422adc);
    break;
  default:
    FUN_00421a70();
    break;
  case 7:
    FUN_00421f98(param_1,&local_c,1);
    FUN_004049c4(param_2,0,local_c & 0xff);
    uVar2 = thunk_FUN_00404db0(param_2);
    FUN_00421f98(param_1,uVar2,local_c & 0xff);
    break;
  case 8:
    FUN_00404928(param_2,"False");
    break;
  case 9:
    FUN_00404928(param_2,&DAT_00422ac0);
    break;
  case 0xd:
    FUN_00404928(param_2,&DAT_00422ad0);
  }
  return;
}

