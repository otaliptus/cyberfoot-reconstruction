// Address: 00443a50
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

char FUN_00443a50(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  int *local_10;
  
  local_10 = param_3;
  if (-1 < param_2) {
    iVar1 = FUN_0041edb0(*(undefined4 *)(param_1 + 0xd0));
    if (param_2 < iVar1) {
      cVar3 = '\x01';
      goto LAB_00443a74;
    }
  }
  cVar3 = '\0';
LAB_00443a74:
  if (cVar3 != '\0') {
    uVar2 = FUN_00443198(*(undefined4 *)(param_1 + 0xd0),param_2);
    (**(code **)(*local_10 + 8))(local_10,uVar2);
    if (*(short *)(param_1 + 0xda) != 0) {
      (**(code **)(param_1 + 0xd8))(*(undefined4 *)(param_1 + 0xdc),param_1,param_2,&local_10);
    }
  }
  return cVar3;
}

