// Address: 005128ac
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005128ac(int *param_1,undefined1 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  cVar1 = FUN_0050b340(param_1[0x135],param_1[0x128]);
  if (cVar1 != '\0') {
    (**(code **)(*(int *)param_1[0x135] + 0x30))((int *)param_1[0x135],param_1[0x128]);
    uVar2 = FUN_0050a320();
    uStack_14 = FUN_0050a2cc(uVar2);
    uStack_10 = (**(code **)(*param_1 + 0x138))();
    FUN_00403c80(param_1,&uStack_14,&uStack_10,param_2);
    uVar5 = 1;
    iVar3 = *(int *)param_1[0x135];
    iVar3 = (**(code **)(iVar3 + 0x30))((int *)param_1[0x135],param_2,iVar3,1,DAT_00512978);
    uVar4 = (uint)*(byte *)(iVar3 + 0x31);
    uVar2 = (**(code **)(*param_1 + 0x138))();
    (**(code **)(*param_1 + 0x20c))(param_1,param_2,uVar2,uVar4);
    if ((char)param_1[0xaf] == '\0') {
      uVar2 = (**(code **)(*(int *)param_1[0x135] + 0x30))((int *)param_1[0x135],uVar5);
      FUN_00512d88(param_1,uVar2);
    }
  }
  return;
}

