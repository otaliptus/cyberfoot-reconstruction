// Address: 00416abc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00416abc(undefined2 *param_1,undefined2 *param_2,undefined4 param_3)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar2 = FUN_00416790(*param_1);
  bVar1 = (&DAT_00662460)[uVar2 & 0xffff];
  uVar2 = FUN_00416790(*param_2);
  uVar5 = CONCAT31((int3)((uVar2 & 0xffff) >> 8),(&DAT_00662460)[uVar2 & 0xffff]);
  switch((&DAT_0066249c)[(uint)(byte)(&DAT_00662460)[uVar2 & 0xffff] + (uint)bVar1 * 0xb]) {
  case 0:
    FUN_0041159c();
    uVar5 = 1;
    break;
  case 1:
    uVar5 = FUN_00416888(bVar1,uVar5);
    break;
  case 2:
    uVar5 = FUN_0041689c(bVar1,uVar5,param_3);
    break;
  case 3:
    uVar5 = FUN_00412a6c(param_2);
    uVar3 = FUN_00412a6c(param_1);
    uVar5 = FUN_00416984(uVar3,uVar5);
    break;
  case 4:
    FUN_00414040(param_1);
    FUN_00414040(param_2);
    uVar5 = FUN_004169d4();
    break;
  case 5:
    FUN_00414d18(param_1);
    FUN_00414d18(param_2);
    uVar5 = FUN_00416a24();
    break;
  case 6:
    uVar5 = FUN_00416a50(param_1,param_2);
    break;
  case 7:
    uVar2 = FUN_00413b2c(param_2);
    uVar4 = FUN_00413b2c(param_1);
    uVar5 = FUN_00416984(uVar4 & 0x7f,uVar2 & 0x7f);
    break;
  case 8:
    FUN_004147b0(param_1);
    FUN_004147b0(param_2);
    uVar5 = FUN_004169fc();
    break;
  case 9:
    FUN_00413530(param_1);
    FUN_00413530(param_2);
    uVar5 = FUN_00416998();
    break;
  case 10:
    uVar5 = FUN_004167b4(param_1,param_2,param_3);
    break;
  default:
    FUN_0041159c();
    uVar5 = 1;
  }
  return uVar5;
}

