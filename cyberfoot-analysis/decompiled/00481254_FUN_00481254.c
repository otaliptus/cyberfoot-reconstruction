// Address: 00481254
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00481254(int *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  
  if (param_2 != param_1[0x28]) {
    if (param_2 != 0) {
      cVar1 = (**(code **)(*param_1 + 0x54))();
      if (cVar1 == '\0') goto LAB_00481299;
    }
    if (param_2 == 0) {
      *(char *)((int)param_1 + 0x229) = (char)param_1[0xa0];
    }
    else {
      *(undefined1 *)(param_1 + 0xa0) = *(undefined1 *)((int)param_1 + 0x229);
      *(undefined1 *)((int)param_1 + 0x229) = 0;
    }
  }
LAB_00481299:
  FUN_00465b18(param_1,param_2,param_3);
  return;
}

