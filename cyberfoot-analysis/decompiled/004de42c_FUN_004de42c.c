// Address: 004de42c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined1 FUN_004de42c(int param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 local_18 [4];
  
  cVar1 = FUN_004de05c();
  if (cVar1 == '\0') {
    cVar1 = FUN_004de05c();
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 0x62) = 1;
      *(undefined1 *)(param_1 + 99) = 0;
      FUN_0040803c(local_18,0x10);
      local_18[0] = 0;
      (**(code **)(param_2 + 0x38))(*(undefined4 *)(param_2 + 0x3c),local_18);
      uVar2 = *(undefined1 *)(param_1 + 99);
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

