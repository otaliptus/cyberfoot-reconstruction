// Address: 004670f8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

char FUN_004670f8(int param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [16];
  
  local_2c = *param_2;
  uStack_28 = param_2[1];
  uStack_24 = param_2[2];
  uStack_20 = param_2[3];
  if (*(int *)(param_1 + 0xa0) != 0) {
    cVar1 = FUN_00403c80(*(int *)(param_1 + 0xa0),0,param_1);
    if (cVar1 == '\0') {
      cVar1 = '\0';
      goto LAB_0046712c;
    }
  }
  cVar1 = '\x01';
LAB_0046712c:
  if (cVar1 != '\0') {
    iVar2 = FUN_00467f7c(param_1,&local_2c);
    if (iVar2 == 0) {
      FUN_00403c80(param_1,0,&local_2c);
    }
    else {
      uVar3 = FUN_00465c50(iVar2);
      puVar5 = auStack_1c;
      uVar4 = FUN_00465c0c(iVar2);
      FUN_0041c990(0,0,uVar4,puVar5,uVar3);
      FUN_00403c80(param_1,iVar2,auStack_1c);
    }
  }
  return cVar1;
}

