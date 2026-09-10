// Address: 00512b10
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00512b10(int *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 uVar3;
  char cVar4;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  uStack_1c = 0x512b2b;
  cVar2 = FUN_0050b340(param_1[0x135],param_1[0x128]);
  if (cVar2 != '\0') {
    uStack_1c = 0x512b44;
    (**(code **)(*(int *)param_1[0x135] + 0x30))((int *)param_1[0x135],param_1[0x128]);
    uStack_1c = 0x512b49;
    cVar2 = FUN_0050a2dc();
    cVar4 = (char)param_2;
    if (cVar2 == '\0') {
      if (cVar4 == '\0') {
        uStack_1c = 0x512bfd;
        FUN_005128ac(param_1,0);
      }
      else {
        uStack_1c = 0x512bf2;
        FUN_005128ac(param_1,2);
      }
    }
    else if ((char)param_1[0xb8] == '\0') {
      if ((cVar4 == '\0') || (*(char *)((int)param_1 + 0x4d2) == '\0')) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
      uStack_1c = param_2;
      (**(code **)(*param_1 + 0x1f8))(param_1,DAT_00512c04,uVar3);
      FUN_0050aea4(param_1[0x135]);
      uStack_1c = FUN_0050a2cc();
      uStack_18 = (**(code **)(*param_1 + 0x138))();
      if (cVar4 == '\0') {
        uStack_14 = 0;
      }
      else {
        uStack_14 = 2;
      }
      uVar1 = uStack_14;
      FUN_00403c80(param_1,&uStack_1c,&uStack_18);
      FUN_0050ed44(param_1,uVar1);
    }
    else if (*(char *)((int)param_1 + 0x4d2) != '\0') {
      uStack_1c = 0x512be3;
      FUN_004e87c4(param_1);
    }
  }
  return;
}

