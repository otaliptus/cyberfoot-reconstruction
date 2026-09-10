// Address: 0044ac08
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0044ac08(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined3 uVar4;
  undefined1 auStack_3c [25];
  undefined1 local_23;
  
  uVar2 = FUN_0044a950(param_1,auStack_3c);
  uVar3 = CONCAT31((int3)((uint)uVar2 >> 8),local_23) & 0xffffff03;
  cVar1 = (char)uVar3;
  uVar4 = (undefined3)(uVar3 >> 8);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else if (cVar1 == '\x01') {
    uVar2 = CONCAT31(uVar4,2);
  }
  else if (cVar1 == '\x02') {
    uVar2 = CONCAT31(uVar4,1);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

