// Address: 00466b78
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

char FUN_00466b78(int param_1,undefined1 param_2,int param_3,undefined4 *param_4)

{
  uint uVar1;
  uint uVar2;
  int3 iVar3;
  int iVar4;
  char local_e;
  undefined4 local_d;
  undefined4 uStack_9;
  undefined1 local_5;
  
  local_d = *param_4;
  uStack_9 = param_4[1];
  local_e = '\0';
  local_5 = param_2;
  if (*(short *)(param_1 + 0x13a) != 0) {
    (**(code **)(param_1 + 0x138))
              (*(undefined4 *)(param_1 + 0x13c),param_1,param_2,&local_e,&local_d,param_3);
  }
  if (local_e == '\0') {
    *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + param_3;
    while( true ) {
      uVar2 = *(uint *)(param_1 + 0xa4);
      if ((int)((uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f)) < 0x78) break;
      uVar1 = *(uint *)(param_1 + 0xa4);
      iVar4 = ((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f)) + -0x78;
      *(int *)(param_1 + 0xa4) = iVar4;
      iVar3 = (int3)((int)uVar1 >> 0x1f);
      if ((int)uVar2 < 0) {
        if (iVar4 != 0) {
          *(int *)(param_1 + 0xa4) = -iVar4;
        }
        local_e = FUN_00403c80(param_1,CONCAT31(iVar3,local_5),&local_d);
      }
      else {
        local_e = FUN_00403c80(param_1,CONCAT31(iVar3,local_5),&local_d);
      }
    }
  }
  return local_e;
}

